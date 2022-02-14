
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct hostent_data {char* hostbuf; char** h_addr_ptrs; scalar_t__ host_addr; int ** host_aliases; } ;
struct hostent {int h_addrtype; char* h_name; char** h_addr_list; int ** h_aliases; int h_length; } ;
typedef TYPE_1__* res_state ;
struct TYPE_4__ {unsigned int options; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int VAR_8 ;
 scalar_t__ FUNC_1 (struct hostent*,struct hostent*,char*,size_t) ;
 struct hostent_data* FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int VAR_9 ;
 int FUNC_4 (char const*,struct in_addr*) ;
 int FUNC_5 (int,char const*,scalar_t__) ;
 int FUNC_6 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_10, int VAR_11, struct hostent *VAR_12, char *VAR_13,
    size_t VAR_14, res_state VAR_15)
{
 struct hostent_data *VAR_16;
 struct hostent VAR_17;

 if ((VAR_16 = FUNC_2()) == ((void*)0)) {
  VAR_9 = VAR_1;
  FUNC_0(VAR_15, VAR_4);
  return (-1);
 }

 if ((VAR_11 != 129 ||
     FUNC_4(VAR_10, (struct in_addr *)VAR_16->host_addr) != 1) &&
     FUNC_5(VAR_11, VAR_10, VAR_16->host_addr) != 1) {
  FUNC_0(VAR_15, VAR_2);
  return (-1);
 }
 FUNC_6(VAR_16->hostbuf, VAR_10, VAR_3);
 VAR_16->hostbuf[VAR_3] = '\0';
 if (VAR_11 == 129 && (VAR_15->options & VAR_8) != 0U) {
  FUNC_3((char *)VAR_16->host_addr,
      (char *)VAR_16->host_addr);
  VAR_11 = 128;
 }
 VAR_17.h_addrtype = VAR_11;
 switch(VAR_11) {
 case 129:
  VAR_17.h_length = VAR_7;
  break;
 case 128:
  VAR_17.h_length = VAR_6;
  break;
 default:
  VAR_9 = VAR_0;
  FUNC_0(VAR_15, VAR_4);
  return (-1);
 }
 VAR_17.h_name = VAR_16->hostbuf;
 VAR_17.h_aliases = VAR_16->host_aliases;
 VAR_16->host_aliases[0] = ((void*)0);
 VAR_16->h_addr_ptrs[0] = (char *)VAR_16->host_addr;
 VAR_16->h_addr_ptrs[1] = ((void*)0);
 VAR_17.h_addr_list = VAR_16->h_addr_ptrs;
 if (FUNC_1(&VAR_17, VAR_12, VAR_13, VAR_14) != 0) {
  FUNC_0(VAR_15, VAR_4);
  return (-1);
 }
 FUNC_0(VAR_15, VAR_5);
 return (0);
}
