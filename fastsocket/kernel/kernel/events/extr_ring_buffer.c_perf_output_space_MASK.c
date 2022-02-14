
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int writable; } ;


 int FUNC_0 (struct ring_buffer*) ;

__attribute__((used)) static bool FUNC_1(struct ring_buffer *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_0->writable)
  return 1;

 VAR_4 = FUNC_0(VAR_0) - 1;

 VAR_2 = (VAR_2 - VAR_1) & VAR_4;
 VAR_3 = (VAR_3 - VAR_1) & VAR_4;

 if ((int)(VAR_3 - VAR_2) < 0)
  return 0;

 return 1;
}
