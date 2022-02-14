
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_9__ {scalar_t__ constant_part; } ;
struct TYPE_8__ {scalar_t__ constant_part; int reg; int is_variable; } ;
struct TYPE_10__ {scalar_t__ off_nl_nosnap; scalar_t__ off_nl; TYPE_2__ off_linkhdr; TYPE_1__ off_linkpl; TYPE_2__ off_linktype; } ;
typedef TYPE_3__ compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (TYPE_3__*,int ) ;
 struct block* FUNC_3 (TYPE_3__*,int ,int ,int ,int ,int) ;

struct block *
FUNC_4(compiler_state_t *VAR_4, int VAR_5)
{
 struct block *VAR_6, *VAR_7;




 VAR_6 = FUNC_2(VAR_4, (bpf_int32)VAR_2);


 if (VAR_5 >= 0) {
  VAR_7 = FUNC_3(VAR_4, VAR_3, 0, VAR_0,
      (bpf_int32)VAR_5, 0x0000ffff);
  FUNC_1(VAR_6, VAR_7);
  VAR_6 = VAR_7;
 }
 FUNC_0(VAR_4, VAR_1, VAR_4->off_linkpl.is_variable,
     VAR_4->off_linkpl.constant_part + VAR_4->off_nl + 6,
     VAR_4->off_linkpl.reg);

 VAR_4->off_linktype = VAR_4->off_linkhdr;
 VAR_4->off_linkpl.constant_part = VAR_4->off_linkhdr.constant_part + 2;

 VAR_4->off_nl = 0;
 VAR_4->off_nl_nosnap = 0;

 return VAR_6;
}
