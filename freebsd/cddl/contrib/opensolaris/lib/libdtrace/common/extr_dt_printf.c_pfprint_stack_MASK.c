
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int dtrd_action; int dtrd_arg; int dtrd_size; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
typedef int dtrace_optval_t ;
struct TYPE_9__ {int* dt_options; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_10__ {int pfd_dynwidth; int pfd_flags; int pfd_width; TYPE_1__* pfd_rec; } ;
typedef TYPE_3__ dt_pfargd_t ;
typedef int caddr_t ;
typedef int FILE ;





 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *,char const*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int *,char const*,int ,int) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_3, FILE *VAR_4, const char *VAR_5,
    const dt_pfargd_t *VAR_6, const void *VAR_7, size_t VAR_8, uint64_t VAR_9)
{
 int VAR_10;
 dtrace_optval_t VAR_11 = VAR_3->dt_options[VAR_0];
 const dtrace_recdesc_t *VAR_12 = VAR_6->pfd_rec;
 caddr_t VAR_13 = (caddr_t)VAR_7;
 int VAR_14 = 0;
 if (VAR_6->pfd_dynwidth < 0) {
  FUNC_0(VAR_6->pfd_flags & VAR_1);
  VAR_10 = -VAR_6->pfd_dynwidth;
 } else if (VAR_6->pfd_flags & VAR_2) {
  VAR_10 = VAR_6->pfd_dynwidth ? VAR_6->pfd_dynwidth : VAR_6->pfd_width;
 } else {
  VAR_10 = 0;
 }

 VAR_3->dt_options[VAR_0] = VAR_10;

 switch (VAR_12->dtrd_action) {
 case 128:
 case 130:
  VAR_14 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_13, VAR_12->dtrd_arg);
  break;

 case 129:
  VAR_14 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_13, VAR_12->dtrd_arg,
      VAR_12->dtrd_size / VAR_12->dtrd_arg);
  break;

 default:
  FUNC_0(0);
 }

 VAR_3->dt_options[VAR_0] = VAR_11;

 return (VAR_14);
}
