
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; unsigned int sequence; } ;
struct TYPE_4__ {long sequence; int tval_usec; int tval_sec; } ;
union drm_wait_vblank {TYPE_2__ request; TYPE_1__ reply; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct drm_file {int dummy; } ;
struct drm_device {unsigned int num_crtcs; unsigned int* last_vblank_wait; int vblank_time_lock; int * _vblank_count; scalar_t__ irq_enabled; } ;
struct TYPE_6__ {int p_pid; } ;


 int FUNC_0 (int ,char*,int ,unsigned int,int const,int,long) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* VAR_14 ;
 int FUNC_3 (struct drm_device*,unsigned int,union drm_wait_vblank*,struct drm_file*) ;
 int FUNC_4 (struct drm_device*,unsigned int) ;
 long FUNC_5 (struct drm_device*,unsigned int,struct timeval*) ;
 int FUNC_6 (struct drm_device*,unsigned int) ;
 int FUNC_7 (struct drm_device*,unsigned int) ;
 int VAR_15 ;
 int FUNC_8 (int *,int *,int ,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct drm_device *VAR_16, void *VAR_17,
      struct drm_file *VAR_18)
{
 union drm_wait_vblank *VAR_19 = VAR_17;
 int VAR_20;
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24;

 if ( (!VAR_16->irq_enabled))
  return -VAR_1;

 if (VAR_19->request.type & VAR_12)
  return -VAR_1;

 if (VAR_19->request.type &
     ~(VAR_13 | VAR_7 |
       VAR_8)) {
  FUNC_2("Unsupported type value 0x%x, supported mask 0x%x\n",
     VAR_19->request.type,
     (VAR_13 | VAR_7 |
      VAR_8));
  return -VAR_1;
 }

 VAR_21 = VAR_19->request.type & VAR_7;
 VAR_24 = (VAR_19->request.type & VAR_8);
 if (VAR_24)
  VAR_23 = VAR_24 >> VAR_9;
 else
  VAR_23 = VAR_21 & VAR_11 ? 1 : 0;
 if (VAR_23 >= VAR_16->num_crtcs)
  return -VAR_1;

 VAR_20 = FUNC_6(VAR_16, VAR_23);
 if (VAR_20) {
  FUNC_1("failed to acquire vblank counter, %d\n", VAR_20);
  return VAR_20;
 }
 VAR_22 = FUNC_4(VAR_16, VAR_23);

 switch (VAR_19->request.type & VAR_13) {
 case 128:
  VAR_19->request.sequence += VAR_22;
  VAR_19->request.type &= ~128;
 case 129:
  break;
 default:
  VAR_20 = -VAR_1;
  goto done;
 }

 if (VAR_21 & VAR_6) {



  return FUNC_3(VAR_16, VAR_23, VAR_19, VAR_18);
 }

 if ((VAR_21 & VAR_10) &&
     (VAR_22 - VAR_19->request.sequence) <= (1<<23)) {
  VAR_19->request.sequence = VAR_22 + 1;
 }

 FUNC_1("waiting on vblank count %d, crtc %d\n",
    VAR_19->request.sequence, VAR_23);
 VAR_16->last_vblank_wait[VAR_23] = VAR_19->request.sequence;
 FUNC_9(&VAR_16->vblank_time_lock);
 while (((FUNC_4(VAR_16, VAR_23) - VAR_19->request.sequence) >
     (1 << 23)) && VAR_16->irq_enabled) {
  VAR_20 = -FUNC_8(&VAR_16->_vblank_count[VAR_23], &VAR_16->vblank_time_lock,
      VAR_5, "drmvbl", 3 * VAR_15);
  if (VAR_20 == -VAR_2)
   VAR_20 = -VAR_3;
  if (VAR_20 != 0)
   break;
 }
 FUNC_10(&VAR_16->vblank_time_lock);
 if (VAR_20 != -VAR_0) {
  struct timeval VAR_25;
  long VAR_26;

  VAR_26 = FUNC_5(VAR_16, VAR_23, &VAR_25);
  FUNC_0(VAR_4, "wait_vblank %d %d rt %x success %d %d",
      VAR_14->p_pid, VAR_23, VAR_19->request.type,
      VAR_19->request.sequence, VAR_26);

  VAR_19->reply.sequence = VAR_26;
  VAR_19->reply.tval_sec = VAR_25.tv_sec;
  VAR_19->reply.tval_usec = VAR_25.tv_usec;

  FUNC_1("returning %d to client\n",
     VAR_19->reply.sequence);
 } else {
  FUNC_0(VAR_4, "wait_vblank %d %d rt %x error %d %d",
      VAR_14->p_pid, VAR_23, VAR_19->request.type, VAR_20,
      VAR_19->request.sequence);

  FUNC_1("vblank wait interrupted by signal\n");
 }

done:
 FUNC_7(VAR_16, VAR_23);
 return VAR_20;
}
