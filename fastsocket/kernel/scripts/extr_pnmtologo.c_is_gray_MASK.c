
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color {scalar_t__ red; scalar_t__ green; scalar_t__ blue; } ;



__attribute__((used)) static inline int FUNC_0(struct color VAR_0)
{
    return VAR_0.red == VAR_0.green && VAR_0.red == VAR_0.blue;
}
