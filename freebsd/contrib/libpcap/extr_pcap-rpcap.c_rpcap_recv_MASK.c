
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32 ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int ,void*,size_t,int,char*,int ) ;

__attribute__((used)) static int FUNC_2(SOCKET VAR_3, void *VAR_4, size_t VAR_5, uint32 *VAR_6, char *VAR_7)
{
 int VAR_8;

 if (VAR_5 > *VAR_6)
 {

  FUNC_0(VAR_7, VAR_0, "Message payload is too short");
  return -1;
 }
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_2|VAR_1, VAR_7, VAR_0);
 if (VAR_8 == -1)
 {
  return -1;
 }
 *VAR_6 -= VAR_8;
 return 0;
}
