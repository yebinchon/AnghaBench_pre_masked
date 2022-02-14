
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usock ;
struct sockaddr_un {unsigned int sun_len; int sun_path; void* sun_family; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* first; } ;
struct config_file {int control_port; scalar_t__ do_ip4; TYPE_2__ control_ifs; } ;
typedef scalar_t__ socklen_t ;
struct TYPE_3__ {char* str; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,struct sockaddr_storage*,scalar_t__*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,int ,struct sockaddr_storage*,scalar_t__*) ;
 int FUNC_7 (char*,char const*,char const*) ;
 int FUNC_8 (char*,char const*,struct sockaddr_storage*,scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int ,int) ;
 scalar_t__ FUNC_11 (char const*,char) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 char const* FUNC_13 (int) ;
 int FUNC_14 (int ,char const*,int) ;
 char const* FUNC_15 (int) ;

__attribute__((used)) static int
FUNC_16(const char* VAR_8, struct config_file* VAR_9, int VAR_10)
{
 struct sockaddr_storage VAR_11;
 socklen_t VAR_12;
 int VAR_13 = 0, VAR_14 = VAR_2;
 int VAR_15, VAR_16 = 1;

 if(!VAR_8) {
  if(VAR_9->control_ifs.first) {
   VAR_8 = VAR_9->control_ifs.first->str;
  } else if(VAR_9->do_ip4) {
   VAR_8 = "127.0.0.1";
  } else {
   VAR_8 = "::1";
  }

  if(FUNC_12(VAR_8, "0.0.0.0") == 0)
   VAR_8 = "127.0.0.1";
  else if(FUNC_12(VAR_8, "::0") == 0 ||
   FUNC_12(VAR_8, "0::0") == 0 ||
   FUNC_12(VAR_8, "0::") == 0 ||
   FUNC_12(VAR_8, "::") == 0)
   VAR_8 = "::1";
 }
 if(FUNC_11(VAR_8, '@')) {
  if(!FUNC_4(VAR_8, &VAR_11, &VAR_12))
   FUNC_5("could not parse IP@port: %s", VAR_8);
 } else {
  if(!FUNC_6(VAR_8, VAR_9->control_port, &VAR_11, &VAR_12))
   FUNC_5("could not parse IP: %s", VAR_8);
 }

 if(VAR_13 == 0)
  VAR_13 = FUNC_1(&VAR_11, VAR_12)?VAR_4:VAR_3;
 VAR_15 = FUNC_10(VAR_13, VAR_5, VAR_14);
 if(VAR_15 == -1) {

  FUNC_5("socket: %s", FUNC_13(VAR_7));



 }
 if(FUNC_2(VAR_15, (struct sockaddr*)&VAR_11, VAR_12) < 0) {

  int VAR_17 = VAR_7;
  if(!VAR_16) FUNC_7("connect: %s for %s", FUNC_13(VAR_17), VAR_8);
  else FUNC_8("connect", FUNC_13(VAR_17), &VAR_11, VAR_12);
  if(VAR_17 == VAR_1 && VAR_10) {
   FUNC_9("unbound is stopped\n");
   FUNC_3(3);
  }
  FUNC_3(1);
 }
 return VAR_15;
}
