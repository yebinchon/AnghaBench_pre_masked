
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kq_timer_cb_data {int c; } ;
struct TYPE_2__ {struct kq_timer_cb_data* p_v; } ;
struct knote {int kn_sfflags; TYPE_1__ kn_ptr; int kn_status; int kn_flags; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct knote*,int ) ;
 int FUNC_3 (struct knote*,int *) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct kq_timer_cb_data* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_8)
{
 struct kq_timer_cb_data *VAR_9;
 sbintime_t VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_8, &VAR_10);
 if (VAR_12 != 0)
  return (VAR_12);

 do {
  VAR_11 = VAR_7;
  if (VAR_11 >= VAR_6)
   return (VAR_0);
 } while (!FUNC_0(&VAR_7, VAR_11, VAR_11 + 1));

 if ((VAR_8->kn_sfflags & VAR_5) == 0)
  VAR_8->kn_flags |= VAR_1;
 VAR_8->kn_status &= ~VAR_2;
 VAR_8->kn_ptr.p_v = VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_3, VAR_4);
 FUNC_1(&VAR_9->c, 1);
 FUNC_2(VAR_8, VAR_10);

 return (0);
}
