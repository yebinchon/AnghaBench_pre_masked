
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int hdisplay; int vdisplay; int vtotal; int htotal; int dot_clock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(const struct videomode *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(FUNC_1(FUNC_0(VAR_0->dot_clock),
     VAR_0->htotal), VAR_0->vtotal);

 return VAR_0->hdisplay * VAR_0->vdisplay * VAR_1;
}
