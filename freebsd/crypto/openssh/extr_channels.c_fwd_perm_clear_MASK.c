
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct permission {int listen_path; int listen_host; int host_to_connect; } ;


 int FUNC_0 (struct permission*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct permission *VAR_0)
{
 FUNC_1(VAR_0->host_to_connect);
 FUNC_1(VAR_0->listen_host);
 FUNC_1(VAR_0->listen_path);
 FUNC_0(VAR_0, sizeof(*VAR_0));
}
