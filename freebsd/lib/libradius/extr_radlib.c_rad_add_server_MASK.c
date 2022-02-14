
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int dummy; } ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rad_handle*,char const*,int,char const*,int,int,int ,struct in_addr*) ;

int
FUNC_1(struct rad_handle *VAR_2, const char *VAR_3, int VAR_4,
    const char *VAR_5, int VAR_6, int VAR_7)
{
     struct in_addr VAR_8;
 VAR_8.s_addr = VAR_1;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
  VAR_0, &VAR_8);
}
