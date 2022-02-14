
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ii_type; char* ii_name; } ;
typedef TYPE_1__ iidesc_t ;


 int FUNC_0 (char*,int,char*) ;

int
FUNC_1(iidesc_t *VAR_0)
{
 FUNC_0("type: %d  name %s\n", VAR_0->ii_type,
     (VAR_0->ii_name ? VAR_0->ii_name : "(anon)"));

 return (0);
}
