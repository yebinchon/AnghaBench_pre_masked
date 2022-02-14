
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry_linkresolver {void* strategy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;


 int VAR_4 ;
void
FUNC_0(struct archive_entry_linkresolver *VAR_5,
    int VAR_6)
{
 int VAR_7 = VAR_6 & VAR_4;

 switch (VAR_7) {
 case 138:
 case 137:
 case 128:
  VAR_5->strategy = VAR_2;
  break;
 case 136:
  switch (VAR_6) {
  case 134:
  case 135:
   VAR_5->strategy = VAR_1;
   break;
  default:
   VAR_5->strategy = VAR_2;
   break;
  }
  break;
 case 132:
  VAR_5->strategy = VAR_0;
  break;
 case 133:
 case 131:
 case 130:
 case 129:
  VAR_5->strategy = VAR_3;
  break;
 default:
  VAR_5->strategy = VAR_2;
  break;
 }
}
