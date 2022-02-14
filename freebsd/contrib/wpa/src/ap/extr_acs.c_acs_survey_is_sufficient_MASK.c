
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_survey {int filled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct freq_survey *VAR_5)
{
 if (!(VAR_5->filled & VAR_4)) {
  FUNC_0(VAR_0, "ACS: Survey is missing noise floor");
  return 0;
 }

 if (!(VAR_5->filled & VAR_1)) {
  FUNC_0(VAR_0, "ACS: Survey is missing channel time");
  return 0;
 }

 if (!(VAR_5->filled & VAR_2) &&
     !(VAR_5->filled & VAR_3)) {
  FUNC_0(VAR_0,
      "ACS: Survey is missing RX and busy time (at least one is required)");
  return 0;
 }

 return 1;
}
