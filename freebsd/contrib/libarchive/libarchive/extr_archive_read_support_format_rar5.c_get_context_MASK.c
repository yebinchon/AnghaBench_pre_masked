
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rar5 {int dummy; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;



__attribute__((used)) static inline struct rar5* FUNC_0(struct archive_read* VAR_0) {
 return (struct rar5*) VAR_0->format->data;
}
