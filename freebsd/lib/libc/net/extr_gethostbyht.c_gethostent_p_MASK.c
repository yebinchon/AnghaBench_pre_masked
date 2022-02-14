
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent_data {char** h_addr_ptrs; char* hostbuf; char** host_aliases; scalar_t__ host_addr; int hostf; } ;
struct hostent {char** h_addr_list; int h_length; int h_addrtype; char* h_name; char** h_aliases; } ;
typedef int res_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(struct hostent *VAR_11, struct hostent_data *VAR_12, int VAR_13,
    res_state VAR_14)
{
 char *VAR_15, *VAR_16, *VAR_17;
 char *VAR_18, **VAR_19;
 int VAR_20, VAR_21;
 char VAR_22[VAR_2 + 1];

 if (!VAR_12->hostf && !(VAR_12->hostf = FUNC_3(VAR_10, "re"))) {
  FUNC_0(VAR_14, VAR_6);
  return (-1);
 }
 again:
 if (!(VAR_15 = FUNC_2(VAR_22, sizeof VAR_22, VAR_12->hostf))) {
  FUNC_0(VAR_14, VAR_3);
  return (-1);
 }
 if (*VAR_15 == '#')
  goto again;
 VAR_18 = FUNC_7(VAR_15, "#\n");
 if (VAR_18 != ((void*)0))
  *VAR_18 = '\0';
 if (!(VAR_18 = FUNC_7(VAR_15, " \t")))
  goto again;
 *VAR_18++ = '\0';
 if (FUNC_4(VAR_1, VAR_15, VAR_12->host_addr) > 0) {
  VAR_20 = VAR_1;
  VAR_21 = VAR_4;
 } else if (FUNC_4(VAR_0, VAR_15, VAR_12->host_addr) > 0) {
  if (VAR_13) {
   FUNC_1((char *)VAR_12->host_addr,
       (char *)VAR_12->host_addr);
   VAR_20 = VAR_1;
   VAR_21 = VAR_4;
  } else {
   VAR_20 = VAR_0;
   VAR_21 = VAR_5;
  }
 } else {
  goto again;
 }
 VAR_12->h_addr_ptrs[0] = (char *)VAR_12->host_addr;
 VAR_12->h_addr_ptrs[1] = ((void*)0);
 VAR_11->h_addr_list = VAR_12->h_addr_ptrs;
 VAR_11->h_length = VAR_21;
 VAR_11->h_addrtype = VAR_20;
 while (*VAR_18 == ' ' || *VAR_18 == '\t')
  VAR_18++;
 VAR_16 = VAR_12->hostbuf;
 VAR_17 = VAR_12->hostbuf + sizeof VAR_12->hostbuf;
 VAR_11->h_name = VAR_16;
 VAR_19 = VAR_11->h_aliases = VAR_12->host_aliases;
 if ((VAR_15 = FUNC_7(VAR_18, " \t")) != ((void*)0))
  *VAR_15++ = '\0';
 VAR_21 = FUNC_6(VAR_18) + 1;
 if (VAR_17 - VAR_16 < VAR_21) {
  FUNC_0(VAR_14, VAR_8);
  return (-1);
 }
 FUNC_5(VAR_16, VAR_18, VAR_17 - VAR_16);
 VAR_16 += VAR_21;
 VAR_18 = VAR_15;
 while (VAR_18 && *VAR_18) {
  if (*VAR_18 == ' ' || *VAR_18 == '\t') {
   VAR_18++;
   continue;
  }
  if (VAR_19 >= &VAR_12->host_aliases[VAR_9 - 1])
   break;
  if ((VAR_15 = FUNC_7(VAR_18, " \t")) != ((void*)0))
   *VAR_15++ = '\0';
  VAR_21 = FUNC_6(VAR_18) + 1;
  if (VAR_17 - VAR_16 < VAR_21)
   break;
  FUNC_5(VAR_16, VAR_18, VAR_17 - VAR_16);
  *VAR_19++ = VAR_16;
  VAR_16 += VAR_21;
  VAR_18 = VAR_15;
 }
 *VAR_19 = ((void*)0);
 FUNC_0(VAR_14, VAR_7);
 return (0);
}
