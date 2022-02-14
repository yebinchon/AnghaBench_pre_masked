
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_declspecs {scalar_t__ typespec_word; scalar_t__ storage_class; int thread_p; int inline_p; int complex_p; int unsigned_p; int signed_p; int short_p; int long_long_p; int long_p; int deprecated_p; int explicit_signed_p; int typedef_p; int decl_attr; int type; scalar_t__ restrict_p; scalar_t__ volatile_p; scalar_t__ const_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;

int
FUNC_1 (const struct c_declspecs *VAR_5)
{
  int VAR_6 = ((VAR_5->const_p ? VAR_0 : 0)
        | (VAR_5->volatile_p ? VAR_2 : 0)
        | (VAR_5->restrict_p ? VAR_1 : 0));
  FUNC_0 (!VAR_5->type
       && !VAR_5->decl_attr
       && VAR_5->typespec_word == VAR_4
       && VAR_5->storage_class == VAR_3
       && !VAR_5->typedef_p
       && !VAR_5->explicit_signed_p
       && !VAR_5->deprecated_p
       && !VAR_5->long_p
       && !VAR_5->long_long_p
       && !VAR_5->short_p
       && !VAR_5->signed_p
       && !VAR_5->unsigned_p
       && !VAR_5->complex_p
       && !VAR_5->inline_p
       && !VAR_5->thread_p);
  return VAR_6;
}
