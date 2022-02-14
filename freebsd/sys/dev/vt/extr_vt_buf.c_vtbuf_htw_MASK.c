
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_buf {int vb_roffset; int vb_history_size; } ;



__attribute__((used)) static int
FUNC_0(const struct vt_buf *VAR_0, int VAR_1)
{







 return ((VAR_1 - VAR_0->vb_roffset + VAR_0->vb_history_size) %
     VAR_0->vb_history_size);
}
