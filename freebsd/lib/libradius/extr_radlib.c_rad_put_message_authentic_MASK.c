
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rad_handle {scalar_t__* out; scalar_t__ authentic_pos; scalar_t__ out_len; } ;
typedef int md_zero ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rad_handle*,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rad_handle*,int ,int *,int) ;

int
FUNC_3(struct rad_handle *VAR_4)
{
 FUNC_0(VAR_4, "Message Authenticator not supported,"
     " please recompile libradius with SSL support");
 return -1;

}
