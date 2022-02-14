
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worddest {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (char const*,int ,int,int ,struct worddest*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_11, int VAR_12, int VAR_13, int VAR_14,
    struct worddest *VAR_15)
{
 if (VAR_13 == VAR_5 || VAR_13 == VAR_6 ||
     VAR_13 == VAR_7 || VAR_13 == VAR_8 ||
     VAR_13 == VAR_9)
  FUNC_0(VAR_11, VAR_10);
 else if (VAR_12 & VAR_4 && !VAR_14 && VAR_15 != ((void*)0))
  FUNC_2(VAR_11, VAR_0, VAR_12, VAR_10, VAR_15);
 else if (VAR_12 & (VAR_3 | VAR_2))
  FUNC_1(VAR_11, VAR_14 ? VAR_1 : VAR_0, VAR_10);
 else
  FUNC_0(VAR_11, VAR_10);
}
