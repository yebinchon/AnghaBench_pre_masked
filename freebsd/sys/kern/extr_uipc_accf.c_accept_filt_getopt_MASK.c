
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt {int dummy; } ;
struct socket {int so_options; int * sol_accept_filter_str; TYPE_1__* sol_accept_filter; } ;
struct accept_filter_arg {int af_arg; int af_name; } ;
struct TYPE_2__ {int * accf_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;
 int VAR_4 ;
 int FUNC_2 (struct accept_filter_arg*,int ) ;
 struct accept_filter_arg* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct sockopt*,struct accept_filter_arg*,int) ;
 int FUNC_5 (int ,int *) ;

int
FUNC_6(struct socket *VAR_5, struct sockopt *VAR_6)
{
 struct accept_filter_arg *VAR_7;
 int VAR_8;

 VAR_8 = 0;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);
 FUNC_0(VAR_5);
 if ((VAR_5->so_options & VAR_4) == 0) {
  VAR_8 = VAR_0;
  goto out;
 }
 if (VAR_5->sol_accept_filter == ((void*)0)) {
  VAR_8 = VAR_0;
  goto out;
 }
 FUNC_5(VAR_7->af_name, VAR_5->sol_accept_filter->accf_name);
 if (VAR_5->sol_accept_filter_str != ((void*)0))
  FUNC_5(VAR_7->af_arg, VAR_5->sol_accept_filter_str);
out:
 FUNC_1(VAR_5);
 if (VAR_8 == 0)
  VAR_8 = FUNC_4(VAR_6, VAR_7, sizeof(*VAR_7));
 FUNC_2(VAR_7, VAR_1);
 return (VAR_8);
}
