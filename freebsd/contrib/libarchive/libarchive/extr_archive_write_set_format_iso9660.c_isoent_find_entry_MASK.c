
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isoent {int dir; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*) ;
 struct isoent* FUNC_1 (struct isoent*,char*) ;

__attribute__((used)) static struct isoent *
FUNC_2(struct isoent *VAR_2, const char *VAR_3)
{





 char VAR_4[256];

 struct isoent *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2;
 VAR_6 = ((void*)0);
 for (;;) {
  VAR_7 = FUNC_0(VAR_4, sizeof(VAR_4), VAR_3);
  if (VAR_7 == 0)
   break;
  VAR_3 += VAR_7;
  if (VAR_3[0] == '/')
   VAR_3++;

  VAR_6 = FUNC_1(VAR_5, VAR_4);
  if (VAR_6 == ((void*)0))
   break;
  if (VAR_3[0] == '\0')
   break;


  VAR_5 = VAR_6;
  VAR_6 = ((void*)0);
  if (!VAR_5->dir)
   break;
 }

 return (VAR_6);
}
