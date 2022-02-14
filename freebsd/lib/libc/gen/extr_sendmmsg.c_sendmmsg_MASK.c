
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmsghdr {int msg_len; int msg_hdr; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int *,int) ;

ssize_t
FUNC_1(int VAR_0, struct mmsghdr *__restrict VAR_1, size_t VAR_2, int VAR_3)
{
 size_t VAR_4, VAR_5;
 ssize_t VAR_6;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_5++) {
  VAR_6 = FUNC_0(VAR_0, &VAR_1[VAR_4].msg_hdr, VAR_3);
  if (VAR_6 == -1) {
   if (VAR_5 != 0) {






    return (VAR_5);
   }
   return (VAR_6);
  }


  VAR_1[VAR_4].msg_len = VAR_6;
 }

 return (VAR_5);
}
