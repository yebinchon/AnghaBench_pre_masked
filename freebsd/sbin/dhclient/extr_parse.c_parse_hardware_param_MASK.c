
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hardware {size_t hlen; int * haddr; int htype; } ;
typedef int FILE ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char**,int *) ;
 unsigned char* FUNC_4 (int *,int *,size_t*,int ,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(FILE *VAR_5, struct hardware *VAR_6)
{
 unsigned char *VAR_7;
 int VAR_8;
 size_t VAR_9;
 char *VAR_10;

 VAR_8 = FUNC_3(&VAR_10, VAR_5);
 switch (VAR_8) {
 case 130:
  VAR_6->htype = VAR_1;
  break;
 case 128:
  VAR_6->htype = VAR_3;
  break;
 case 129:
  VAR_6->htype = VAR_2;
  break;
 default:
  FUNC_5("expecting a network hardware type");
  FUNC_6(VAR_5);
  return;
 }
 VAR_9 = 0;
 VAR_7 = FUNC_4(VAR_5, ((void*)0), &VAR_9, VAR_0, 16, 8);
 if (!VAR_7)
  return;
 if (VAR_9 > sizeof(VAR_6->haddr)) {
  FUNC_0(VAR_7);
  FUNC_5("hardware address too long");
 } else {
  VAR_6->hlen = VAR_9;
  FUNC_1((unsigned char *)&VAR_6->haddr[0], VAR_7,
      VAR_6->hlen);
  if (VAR_9 < sizeof(VAR_6->haddr))
   FUNC_2(&VAR_6->haddr[VAR_9], 0,
       sizeof(VAR_6->haddr) - VAR_9);
  FUNC_0(VAR_7);
 }

 VAR_8 = FUNC_3(&VAR_10, VAR_5);
 if (VAR_8 != VAR_4) {
  FUNC_5("expecting semicolon.");
  FUNC_6(VAR_5);
 }
}
