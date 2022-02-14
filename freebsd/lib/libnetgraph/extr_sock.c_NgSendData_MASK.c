
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_ng {int sg_len; int sg_data; int sg_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int const*,size_t) ;
 int FUNC_3 (struct sockaddr_ng* const) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,int const*,size_t,int ,struct sockaddr*,int) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(int VAR_5, const char *VAR_6, const u_char * VAR_7, size_t VAR_8)
{
 u_char VAR_9[VAR_2 + VAR_1];
 struct sockaddr_ng *const VAR_10 = (struct sockaddr_ng *) VAR_9;
 int VAR_11;


 VAR_10->sg_family = VAR_0;
 FUNC_5(VAR_10->sg_data, VAR_6, VAR_2);
 VAR_10->sg_len = FUNC_6(VAR_10->sg_data) + 1 + VAR_1;


 if (VAR_3 >= 2) {
  FUNC_1("WRITE PACKET to hook \"%s\" (%d bytes)", VAR_6, VAR_8);
  FUNC_3(VAR_10);
  if (VAR_3 >= 3)
   FUNC_2(VAR_7, VAR_8);
 }


 if (FUNC_4(VAR_5, VAR_7, VAR_8, 0, (struct sockaddr *) VAR_10, VAR_10->sg_len) < 0) {
  VAR_11 = VAR_4;
  if (VAR_3 >= 1)
   FUNC_0("sendto(%s)", VAR_10->sg_data);
  VAR_4 = VAR_11;
  return (-1);
 }


 return (0);
}
