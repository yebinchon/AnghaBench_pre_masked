
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vrtc {int callout; } ;
typedef scalar_t__ sbintime_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static __inline void
FUNC_2(struct vrtc *VAR_0, sbintime_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->callout) ? 1 : 0;
 FUNC_0((VAR_1 == 0 && !VAR_2) || (VAR_1 != 0 && VAR_2),
     ("vrtc callout %s with frequency %#lx",
     VAR_2 ? "active" : "inactive", VAR_1));
}
