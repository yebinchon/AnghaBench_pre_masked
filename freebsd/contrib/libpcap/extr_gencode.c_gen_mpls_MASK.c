
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_6__ {scalar_t__ label_stack_depth; int linktype; int off_nl_nosnap; int off_nl; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (TYPE_1__*,int ) ;
 struct block* FUNC_3 (TYPE_1__*,int ,int,int ,int ,int) ;

struct block *
FUNC_4(compiler_state_t *VAR_6, int VAR_7)
{
 struct block *VAR_8, *VAR_9;

        if (VAR_6->label_stack_depth > 0) {

            VAR_8 = FUNC_3(VAR_6, VAR_4, 2, VAR_0, 0, 0x01);
        } else {




            switch (VAR_6->linktype) {

            case 132:
            case 131:
            case 130:
            case 129:
                    VAR_8 = FUNC_2(VAR_6, VAR_2);
                    break;

            case 128:
                    VAR_8 = FUNC_2(VAR_6, VAR_5);
                    break;





            default:
                    FUNC_0(VAR_6, "no MPLS support for data link type %d",
                          VAR_6->linktype);

                    break;
            }
        }


 if (VAR_7 >= 0) {
  VAR_7 = VAR_7 << 12;
  VAR_9 = FUNC_3(VAR_6, VAR_3, 0, VAR_1, (bpf_int32)VAR_7,
      0xfffff000);
  FUNC_1(VAR_8, VAR_9);
  VAR_8 = VAR_9;
 }
        VAR_6->off_nl_nosnap += 4;
        VAR_6->off_nl += 4;
        VAR_6->label_stack_depth++;
 return (VAR_8);
}
