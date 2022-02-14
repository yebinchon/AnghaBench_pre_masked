
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ internal; } ;
struct TYPE_4__ {int fp; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const DB *VAR_3)
{
 HTAB *VAR_4;

 if (!VAR_3)
  return (VAR_1);

 VAR_4 = (HTAB *)VAR_3->internal;
 if (VAR_4->fp == -1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 return (VAR_4->fp);
}
