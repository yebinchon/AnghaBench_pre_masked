
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int fd; int trans; char* local_path; int write_community; int read_community; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (int,int ,int ,struct timeval*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char const*,int) ;

int
FUNC_9(const char *VAR_6, const char *VAR_7, const char *VAR_8,
    const char *VAR_9)
{
 struct timeval VAR_10;


 if (VAR_5.fd != -1) {
  VAR_3 = VAR_0;
  FUNC_5(&VAR_5, "%s", FUNC_7(VAR_3));
  return (-1);
 }


 if (VAR_8 != ((void*)0))
  FUNC_8(VAR_5.read_community, VAR_8,
      sizeof(VAR_5.read_community));
 if (VAR_9 != ((void*)0))
  FUNC_8(VAR_5.write_community, VAR_9,
      sizeof(VAR_5.write_community));

 switch (VAR_5.trans) {

   case 129:
   case 128:
  if (FUNC_3(VAR_6, VAR_7) != 0)
   return (-1);
  break;

   case 131:
   case 130:
  if (FUNC_2(VAR_6) != 0)
   return (-1);
  break;

   default:
  FUNC_5(&VAR_5, "bad transport mapping");
  return (-1);
 }
 VAR_10.tv_sec = 0;
 VAR_10.tv_usec = 0;
 if (FUNC_6(VAR_5.fd, VAR_1, VAR_2,
     &VAR_10, sizeof(struct timeval)) == -1) {
  FUNC_5(&VAR_5, "%s", FUNC_7(VAR_3));
  (void)FUNC_1(VAR_5.fd);
  VAR_5.fd = -1;
  if (VAR_5.local_path[0] != '\0')
   (void)FUNC_4(VAR_5.local_path);
  return (-1);
 }


 FUNC_0(&VAR_4);

 return (0);
}
