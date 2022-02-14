
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_type {int match; } ;
typedef int key_ref_t ;
struct TYPE_2__ {int cred; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int ,struct key_type*,char const*,int ,int) ;

key_ref_t FUNC_2(key_ref_t VAR_2,
    struct key_type *VAR_3,
    const char *VAR_4)
{
 if (!VAR_3->match)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_2, VAR_1->cred,
      VAR_3, VAR_4, VAR_3->match, 0);
}
