
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {long kn_fflags; } ;



__attribute__((used)) static int
FUNC_0(struct knote *VAR_0, long VAR_1)
{

 VAR_0->kn_fflags |= VAR_1;
 return (VAR_0->kn_fflags != 0);
}
