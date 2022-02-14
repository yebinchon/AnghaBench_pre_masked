
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct echoaudio {int pipe_alloc_mask; } ;



__attribute__((used)) static inline int FUNC_0(struct echoaudio *VAR_0, u16 VAR_1)
{
 return (VAR_0->pipe_alloc_mask & (1 << VAR_1));
}
