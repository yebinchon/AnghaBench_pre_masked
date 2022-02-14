
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int SyslogAddr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct sockaddr_un VAR_11;

 if (VAR_3 == -1) {
  if ((VAR_3 = FUNC_2(VAR_0, VAR_6 | VAR_5,
      0)) == -1)
   return;
 }
 if (VAR_3 != -1 && VAR_10 == VAR_4) {
  VAR_11.sun_len = sizeof(VAR_11);
  VAR_11.sun_family = VAR_0;





  (void)FUNC_3(VAR_11.sun_path, VAR_8,
      sizeof VAR_11.sun_path);
  if (FUNC_1(VAR_3, (struct sockaddr *)&VAR_11,
      sizeof(VAR_11)) != -1)
   VAR_10 = VAR_2;

  if (VAR_10 == VAR_4) {
   (void)FUNC_3(VAR_11.sun_path, VAR_7,
       sizeof VAR_11.sun_path);
   if (FUNC_1(VAR_3, (struct sockaddr *)&VAR_11,
       sizeof(VAR_11)) != -1)
    VAR_10 = VAR_1;
  }

  if (VAR_10 == VAR_4) {




   (void)FUNC_3(VAR_11.sun_path, VAR_9,
       sizeof VAR_11.sun_path);
   if (FUNC_1(VAR_3, (struct sockaddr *)&VAR_11,
       sizeof(VAR_11)) != -1)
    VAR_10 = VAR_1;
  }

  if (VAR_10 == VAR_4) {
   (void)FUNC_0(VAR_3);
   VAR_3 = -1;
  }
 }
}
