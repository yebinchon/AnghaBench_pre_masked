
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {struct header_iter* private; } ;
struct header_iter {int dummy; } ;


 int FUNC_0 (struct header_iter*) ;

__attribute__((used)) static void FUNC_1(struct trace_iterator *VAR_0)
{
 struct header_iter *VAR_1 = VAR_0->private;
 FUNC_0(VAR_1);
 VAR_0->private = ((void*)0);
}
