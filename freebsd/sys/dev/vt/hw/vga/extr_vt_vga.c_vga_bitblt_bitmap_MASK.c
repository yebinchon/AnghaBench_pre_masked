
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int term_color_t ;
struct vt_window {int dummy; } ;
struct vt_device {unsigned int vd_width; unsigned int vd_height; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct vt_device*,scalar_t__*,int ,int ,unsigned int,unsigned int,int) ;
 int FUNC_4 (scalar_t__*,int *,scalar_t__ const*,scalar_t__ const*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct vt_device *VAR_1, const struct vt_window *VAR_2,
    const uint8_t *VAR_3, const uint8_t *VAR_4,
    unsigned int VAR_5, unsigned int VAR_6,
    unsigned int VAR_7, unsigned int VAR_8, term_color_t VAR_9, term_color_t VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 uint8_t VAR_20;


 VAR_11 = FUNC_1(VAR_7, VAR_0);
 VAR_12 = VAR_8;

 VAR_13 = FUNC_2(VAR_7 + VAR_5, VAR_0);
 VAR_14 = VAR_8 + VAR_6;
 VAR_13 = FUNC_0(VAR_13, VAR_1->vd_width - 1);
 VAR_14 = FUNC_0(VAR_14, VAR_1->vd_height - 1);

 for (VAR_16 = VAR_12; VAR_16 < VAR_14; ++VAR_16) {
  VAR_17 = 0;
  VAR_18 = VAR_7 - VAR_11;
  VAR_19 = VAR_0 - VAR_18;

  for (VAR_15 = VAR_11; VAR_15 < VAR_13; VAR_15 += VAR_0) {
   VAR_20 = 0;

   FUNC_4(
       &VAR_20, ((void*)0),
       VAR_3, VAR_4, VAR_5,
       VAR_17, VAR_18, VAR_19,
       VAR_16 - VAR_12, 0, 1, VAR_9, VAR_10, 0);

   FUNC_3(VAR_1,
       &VAR_20, VAR_9, VAR_10,
       VAR_15, VAR_16, 1);

   VAR_17 += VAR_19;
   VAR_18 = (VAR_18 + VAR_19) % VAR_0;
   VAR_19 = FUNC_0(VAR_5 - VAR_17, VAR_0);
  }
 }
}
