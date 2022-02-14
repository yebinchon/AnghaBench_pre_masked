
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct timeval {int dummy; } ;
struct TYPE_7__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_8__ {TYPE_1__ key; } ;
struct cache_entry {int laststamp; int * rname; TYPE_2__ key; } ;
struct TYPE_9__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_10__ {TYPE_3__ key; } ;
typedef TYPE_4__ des_block ;
struct TYPE_11__ {int ncachemisses; int ncachehits; int ncachereplays; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 struct cache_entry* VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*,scalar_t__) ;
 short FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_5__ VAR_2 ;

__attribute__((used)) static short
FUNC_4(des_block *VAR_3, char *VAR_4, struct timeval *VAR_5)
{
 struct cache_entry *VAR_6;
 int VAR_7;
 u_long VAR_8;

 VAR_8 = VAR_3->key.high;
 for (VAR_6 = VAR_1, VAR_7 = 0; VAR_7 < VAR_0; VAR_7++, VAR_6++) {
  if (VAR_6->key.key.high == VAR_8 &&
      VAR_6->key.key.low == VAR_3->key.low &&
      VAR_6->rname != ((void*)0) &&
      FUNC_1(VAR_6->rname, VAR_4, FUNC_3(VAR_4) + 1) == 0) {
   if (FUNC_0(VAR_5, &VAR_6->laststamp)) {
    VAR_2.ncachereplays++;
    return (-1);
   }
   VAR_2.ncachehits++;
   return (VAR_7);
  }
 }
 VAR_2.ncachemisses++;
 return (FUNC_2());
}
