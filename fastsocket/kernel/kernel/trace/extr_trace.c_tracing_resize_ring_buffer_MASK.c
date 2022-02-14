
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int use_max_tr; } ;
struct TYPE_5__ {unsigned long entries; int buffer; } ;
struct TYPE_4__ {unsigned long entries; int buffer; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_5)
{
 int VAR_6;






 VAR_3 = 1;

 VAR_6 = FUNC_1(VAR_1.buffer, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (!VAR_0->use_max_tr)
  goto out;

 VAR_6 = FUNC_1(VAR_2.buffer, VAR_5);
 if (VAR_6 < 0) {
  int VAR_7;

  VAR_7 = FUNC_1(VAR_1.buffer,
           VAR_1.entries);
  if (VAR_7 < 0) {
   FUNC_0(1);
   VAR_4 = 1;
  }
  return VAR_6;
 }

 VAR_2.entries = VAR_5;
 out:
 VAR_1.entries = VAR_5;

 return VAR_6;
}
