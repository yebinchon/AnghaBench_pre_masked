
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sun ;
struct sockaddr_un {int sun_len; scalar_t__* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sockaddr_un*,int ,int) ;
 int FUNC_4 (char*,struct sockaddr_un*,int) ;

__attribute__((used)) static int
FUNC_5(int VAR_1)
{
 char VAR_2;
 struct sockaddr_un VAR_3;
 char VAR_4;
 socklen_t VAR_5;

 VAR_2 = VAR_4 = 's';

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_5 = sizeof(VAR_3);
 if ((VAR_1 = FUNC_1(VAR_1, (struct sockaddr *)&VAR_3, &VAR_5)) == -1)
  FUNC_0("accept");
 if (VAR_2 != 's')
  FUNC_0("guard1 = '%c'", VAR_2);
 if (VAR_4 != 's')
  FUNC_0("guard2 = '%c'", VAR_4);



 if (VAR_5 != 2)
  FUNC_0("len %d != 2", VAR_5);
 if (VAR_3.sun_family != VAR_0)
  FUNC_0("sun->sun_family %d != AF_UNIX", VAR_3.sun_family);




 for (size_t VAR_6 = 0; VAR_6 < sizeof(VAR_3.sun_path); VAR_6++)
  if (VAR_3.sun_path[VAR_6])
   FUNC_0("sun.sun_path[%zu] %d != NULL", VAR_6,
       VAR_3.sun_path[VAR_6]);
 return VAR_1;
fail:
 if (VAR_1 != -1)
  FUNC_2(VAR_1);
 return -1;
}
