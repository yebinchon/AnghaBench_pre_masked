
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {struct header_iter* private; struct trace_seq seq; } ;
struct header_iter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct header_iter* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct trace_seq*,char*) ;

__attribute__((used)) static void FUNC_3(struct trace_iterator *VAR_2)
{
 struct header_iter *VAR_3;
 struct trace_seq *VAR_4 = &VAR_2->seq;

 FUNC_2(VAR_4, "VERSION 20070824\n");

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->dev = FUNC_1(VAR_1, VAR_1, ((void*)0));
 VAR_2->private = VAR_3;
}
