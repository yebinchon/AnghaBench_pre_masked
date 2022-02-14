
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conn {unsigned int status; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (struct nlattr const* const) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct nf_conn *VAR_9, const struct nlattr * const VAR_10[])
{
 unsigned long VAR_11;
 unsigned int VAR_12 = FUNC_1(FUNC_0(VAR_10[VAR_0]));
 VAR_11 = VAR_9->status ^ VAR_12;

 if (VAR_11 & (VAR_5|VAR_3|VAR_4))

  return -VAR_1;

 if (VAR_11 & VAR_8 && !(VAR_12 & VAR_8))

  return -VAR_1;

 if (VAR_11 & VAR_2 && !(VAR_12 & VAR_2))

  return -VAR_1;




 VAR_9->status |= VAR_12 & ~(VAR_6 | VAR_7);
 return 0;
}
