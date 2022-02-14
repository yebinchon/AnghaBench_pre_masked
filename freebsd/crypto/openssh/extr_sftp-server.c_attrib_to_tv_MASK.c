
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct TYPE_3__ {int mtime; int atime; } ;
typedef TYPE_1__ Attrib ;



__attribute__((used)) static struct timeval *
FUNC_0(const Attrib *VAR_0)
{
 static struct timeval VAR_1[2];

 VAR_1[0].tv_sec = VAR_0->atime;
 VAR_1[0].tv_usec = 0;
 VAR_1[1].tv_sec = VAR_0->mtime;
 VAR_1[1].tv_usec = 0;
 return VAR_1;
}
