
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {scalar_t__ blocked; scalar_t__ exp_msg_count; } ;



__attribute__((used)) static int FUNC_0(struct link *VAR_0)
{
 return (VAR_0->exp_msg_count || VAR_0->blocked);
}
