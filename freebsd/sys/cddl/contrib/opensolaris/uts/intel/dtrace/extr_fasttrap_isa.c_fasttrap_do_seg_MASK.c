
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint16_t ;
struct user_segment_descriptor {scalar_t__ sd_dpl; int sd_p; size_t sd_type; scalar_t__ sd_def32; scalar_t__ sd_gran; } ;
struct segment_descriptor {scalar_t__ sd_dpl; int sd_p; size_t sd_type; scalar_t__ sd_def32; scalar_t__ sd_gran; } ;
struct reg {size_t r_cs; size_t r_ds; size_t r_es; size_t r_fs; size_t r_gs; size_t r_ss; } ;
struct TYPE_10__ {TYPE_1__* md_ldt; } ;
struct TYPE_11__ {TYPE_2__ p_md; } ;
typedef TYPE_3__ proc_t ;
struct TYPE_12__ {int ftt_segment; } ;
typedef TYPE_4__ fasttrap_tracepoint_t ;
struct TYPE_13__ {struct user_segment_descriptor sd; } ;
struct TYPE_9__ {size_t ldt_len; scalar_t__ ldt_base; } ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct user_segment_descriptor** FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (struct user_segment_descriptor*) ;
 int FUNC_5 (struct user_segment_descriptor*) ;
 TYPE_3__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static int
FUNC_6(fasttrap_tracepoint_t *VAR_6, struct reg *VAR_7, uintptr_t *VAR_8)
{
 proc_t *VAR_9 = VAR_3;



 struct user_segment_descriptor *VAR_10;

 uint16_t VAR_11 = 0, VAR_12, VAR_13;
 uintptr_t VAR_14;

 switch (VAR_6->ftt_segment) {
 case 133:
  VAR_11 = VAR_7->r_cs;
  break;
 case 132:
  VAR_11 = VAR_7->r_ds;
  break;
 case 131:
  VAR_11 = VAR_7->r_es;
  break;
 case 130:
  VAR_11 = VAR_7->r_fs;
  break;
 case 129:
  VAR_11 = VAR_7->r_gs;
  break;
 case 128:
  VAR_11 = VAR_7->r_ss;
  break;
 }





 if (FUNC_2(VAR_11) != VAR_2)
  return (-1);

 VAR_12 = FUNC_0(VAR_11);





 if (FUNC_1(VAR_11)) {







  if (VAR_12 > VAR_5)
   return (-1);

  VAR_10 = (struct user_segment_descriptor *)
      VAR_9->p_md.md_ldt[VAR_12].ldt_base;


 } else {
  if (VAR_12 >= VAR_0)
   return (-1);




  VAR_10 = FUNC_3(VAR_4)[VAR_12];

 }





 if (VAR_10->sd_dpl != VAR_2 || VAR_10->sd_p != 1)
  return (-1);

 VAR_13 = VAR_10->sd_type;





 if ((VAR_13 & 0x10) != 0x10)
  return (-1);

 VAR_14 = FUNC_5(VAR_10) * (VAR_10->sd_gran ? VAR_1 : 1);

 if (VAR_6->ftt_segment == 133) {



  if ((VAR_13 & 0xa) != 0xa)
   return (-1);

  if (*VAR_8 > VAR_14)
   return (-1);
 } else {



  if ((VAR_13 & 0x8) != 0)
   return (-1);
  if ((VAR_13 & 0x4) == 0) {
   if (*VAR_8 > VAR_14)
    return (-1);
  } else if (VAR_10->sd_def32) {
   if (*VAR_8 < VAR_14 + 1 || 0xffff < *VAR_8)
    return (-1);
  } else {
   if (*VAR_8 < VAR_14 + 1 || 0xffffffff < *VAR_8)
    return (-1);
  }
 }

 *VAR_8 += FUNC_4(VAR_10);

 return (0);
}
