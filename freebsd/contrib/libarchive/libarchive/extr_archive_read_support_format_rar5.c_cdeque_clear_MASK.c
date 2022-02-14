
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdeque {scalar_t__ end_pos; scalar_t__ beg_pos; scalar_t__ size; } ;



__attribute__((used)) static void FUNC_0(struct cdeque* VAR_0) {
 VAR_0->size = 0;
 VAR_0->beg_pos = 0;
 VAR_0->end_pos = 0;
}
