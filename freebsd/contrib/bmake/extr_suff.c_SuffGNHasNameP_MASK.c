
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
typedef TYPE_1__ GNode ;


 int strcmp (void const*,int ) ;

__attribute__((used)) static int
SuffGNHasNameP(const void *gn, const void *name)
{
    return (strcmp(name, ((const GNode *)gn)->name));
}
