
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct drm_display_mode {int crtc_vtotal; int crtc_vdisplay; } ;
struct drm_device {int num_crtcs; TYPE_1__* driver; } ;
struct drm_crtc {scalar_t__ framedur_ns; scalar_t__ linedur_ns; scalar_t__ pixeldur_ns; struct drm_display_mode hwmode; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {int (* get_scanout_position ) (struct drm_device*,int,int*,int*) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 struct timeval FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct drm_device*,int,int*,int*) ;
 scalar_t__ FUNC_10 (struct timeval*) ;
 int VAR_12 ;

int FUNC_11(struct drm_device *VAR_13, int VAR_14,
       int *VAR_15,
       struct timeval *VAR_16,
       unsigned VAR_17,
       struct drm_crtc *VAR_18)
{
 struct timeval VAR_19, VAR_20;
 struct drm_display_mode *VAR_21;
 int VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27;
 s64 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 bool VAR_33;

 if (VAR_14 < 0 || VAR_14 >= VAR_13->num_crtcs) {
  FUNC_1("Invalid crtc %d\n", VAR_14);
  return -VAR_7;
 }


 if (!VAR_13->driver->get_scanout_position) {
  FUNC_1("Called from driver w/o get_scanout_position()!?\n");
  return -VAR_8;
 }

 VAR_21 = &VAR_18->hwmode;
 VAR_23 = VAR_21->crtc_vtotal;
 VAR_24 = VAR_21->crtc_vdisplay;


 VAR_28 = VAR_18->framedur_ns;
 VAR_29 = VAR_18->linedur_ns;
 VAR_30 = VAR_18->pixeldur_ns;




 if (VAR_23 <= 0 || VAR_24 <= 0 || VAR_28 == 0) {
  FUNC_0("crtc %d: Noop due to uninitialized mode.\n", VAR_14);
  return -VAR_6;
 }
 for (VAR_27 = 0; VAR_27 < VAR_3; VAR_27++) {



  FUNC_2();


  FUNC_4(&VAR_19);


  VAR_22 = VAR_13->driver->get_scanout_position(VAR_13, VAR_14, &VAR_25, &VAR_26);


  FUNC_4(&VAR_20);





  FUNC_3();


  if (!(VAR_22 & VAR_2)) {
   FUNC_0("crtc %d : scanoutpos query failed [%d].\n",
      VAR_14, VAR_22);
   return -VAR_8;
  }

  VAR_32 = FUNC_10(&VAR_20) - FUNC_10(&VAR_19);


  if (VAR_32 <= (s64) *VAR_15)
   break;
 }


 if (VAR_27 == VAR_3) {
  FUNC_0("crtc %d: Noisy timestamp %d us > %d us [%d reps].\n",
     VAR_14, (int) VAR_32/1000, *VAR_15/1000, VAR_27);
 }


 *VAR_15 = (int) VAR_32;






 VAR_33 = VAR_22 & VAR_1;





 VAR_31 = (s64) VAR_25 * VAR_29 + (s64) VAR_26 * VAR_30;
 if ((VAR_17 & VAR_0) && !VAR_33 &&
     ((VAR_24 - VAR_25) < VAR_23 / 100)) {
  VAR_31 = VAR_31 - VAR_28;


  VAR_22 |= 0x8;
 }
 *VAR_16 = FUNC_8(FUNC_10(&VAR_20) - VAR_31);

 FUNC_0("crtc %d : v %d p(%d,%d)@ %jd.%jd -> %jd.%jd [e %d us, %d rep]\n",
    VAR_14, (int)VAR_22, VAR_26, VAR_25, (uintmax_t)VAR_20.tv_sec,
    (uintmax_t)VAR_20.tv_usec, (uintmax_t)VAR_16->tv_sec,
    (uintmax_t)VAR_16->tv_usec, (int)VAR_32/1000, VAR_27);

 VAR_22 = VAR_5;
 if (VAR_33)
  VAR_22 |= VAR_4;

 return VAR_22;
}
