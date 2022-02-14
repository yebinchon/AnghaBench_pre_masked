
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
struct pcxhr_stream {scalar_t__ timer_period_frag; scalar_t__ timer_abs_periods; TYPE_2__* substream; TYPE_1__* pipe; } ;
struct pcxhr_rmh {scalar_t__* stat; } ;
struct pcxhr_mgr {scalar_t__ granularity; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int is_capture; int first_audio; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcxhr_rmh*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_2 (struct pcxhr_rmh*,int ,int ,int ,int) ;
 int FUNC_3 (char*,char,int,unsigned long,unsigned long) ;

__attribute__((used)) static u_int64_t FUNC_4(struct pcxhr_mgr *VAR_1,
         struct pcxhr_stream *VAR_2)
{
 u_int64_t VAR_3;
 struct pcxhr_rmh VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_2->pipe->is_capture ? 1 : 1<<VAR_2->substream->number;


 FUNC_0(&VAR_4, VAR_0);
 FUNC_2(&VAR_4, VAR_2->pipe->is_capture,
      VAR_2->pipe->first_audio, 0, VAR_6);


 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_5)
  return 0;

 VAR_3 = ((u_int64_t)VAR_4.stat[0]) << 24;
 VAR_3 += (u_int64_t)VAR_4.stat[1];

 FUNC_3("stream %c%d : abs samples real(%ld) timer(%ld)\n",
      VAR_2->pipe->is_capture ? 'C' : 'P',
      VAR_2->substream->number,
      (long unsigned int)VAR_3,
      (long unsigned int)(VAR_2->timer_abs_periods +
     VAR_2->timer_period_frag +
     VAR_1->granularity));
 return VAR_3;
}
