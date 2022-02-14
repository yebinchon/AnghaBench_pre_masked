
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry {scalar_t__ lf_start; scalar_t__ lf_end; scalar_t__ lf_owner; } ;
typedef scalar_t__ off_t ;


 struct lockf_entry* FUNC_0 (struct lockf_entry*,int ) ;
 struct lockf_entry* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,struct lockf_entry*) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct lockf_entry **VAR_5, struct lockf_entry *VAR_6, int VAR_7)
{
 struct lockf_entry *VAR_8;
 off_t VAR_9, VAR_10;
 int VAR_11;

 if ((*VAR_5) == VAR_0) {
  return (0);
 }




 VAR_9 = VAR_6->lf_start;
 VAR_10 = VAR_6->lf_end;
 VAR_11 = 0;
 while (*VAR_5) {
  VAR_8 = *VAR_5;
  if (VAR_8->lf_start > VAR_10)
   break;
  if (((VAR_7 & VAR_2) && VAR_8->lf_owner != VAR_6->lf_owner) ||
      ((VAR_7 & VAR_1) && VAR_8->lf_owner == VAR_6->lf_owner)) {
   *VAR_5 = FUNC_0(VAR_8, VAR_3);
   continue;
  }
  if (VAR_9 > VAR_8->lf_end) {





   *VAR_5 = FUNC_0(VAR_8, VAR_3);
   continue;
  }
  if (VAR_8->lf_start == VAR_9 && VAR_8->lf_end == VAR_10) {





   VAR_11 = 1;
   break;
  }
  if (VAR_8->lf_start <= VAR_9 && VAR_8->lf_end >= VAR_10) {





   VAR_11 = 2;
   break;
  }
  if (VAR_9 <= VAR_8->lf_start && VAR_10 >= VAR_8->lf_end) {





   VAR_11 = 3;
   break;
  }
  if (VAR_8->lf_start < VAR_9 && VAR_8->lf_end >= VAR_9) {





   VAR_11 = 4;
   break;
  }
  if (VAR_8->lf_start > VAR_9 && VAR_8->lf_end > VAR_10) {





   VAR_11 = 5;
   break;
  }
  FUNC_2("lf_findoverlap: default");
 }
 return (VAR_11);
}
