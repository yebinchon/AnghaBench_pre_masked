
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {unsigned long nr_pages; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct ring_buffer*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct ring_buffer *VAR_1)
{
 return VAR_1->nr_pages << (VAR_0 + FUNC_0(VAR_1));
}
