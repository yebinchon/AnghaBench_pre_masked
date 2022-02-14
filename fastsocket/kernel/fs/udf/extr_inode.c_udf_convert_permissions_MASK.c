
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int flags; } ;
struct fileEntry {TYPE_1__ icbTag; int permissions; } ;
typedef int permissions ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static mode_t FUNC_2(struct fileEntry *VAR_9)
{
 mode_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;

 VAR_11 = FUNC_1(VAR_9->permissions);
 VAR_12 = FUNC_0(VAR_9->icbTag.flags);

 VAR_10 = ((VAR_11) & VAR_4) |
  ((VAR_11 >> 2) & VAR_3) |
  ((VAR_11 >> 4) & VAR_5) |
  ((VAR_12 & VAR_1) ? VAR_7 : 0) |
  ((VAR_12 & VAR_0) ? VAR_6 : 0) |
  ((VAR_12 & VAR_2) ? VAR_8 : 0);

 return VAR_10;
}
