
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int outlen; } ;
typedef TYPE_1__ blake2s_state ;
struct TYPE_8__ {int inner_length; } ;
typedef TYPE_2__ blake2s_param ;


 int FUNC_0 (TYPE_1__*,TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1( blake2s_state *VAR_0, const blake2s_param *VAR_1 )
{
  int VAR_2 = FUNC_0(VAR_0, VAR_1);
  VAR_0->outlen = VAR_1->inner_length;
  return VAR_2;
}
