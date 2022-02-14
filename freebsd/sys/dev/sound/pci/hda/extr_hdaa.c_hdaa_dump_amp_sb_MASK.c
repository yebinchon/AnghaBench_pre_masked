
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sbuf {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sbuf*,char*,char const*,int ,int ,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct sbuf *VAR_0, uint32_t VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_1(VAR_1);
 FUNC_4(VAR_0, "     %s amp: 0x%08x "
     "mute=%d step=%d size=%d offset=%d (%+d/%+ddB)\n",
     VAR_2, VAR_1,
     FUNC_0(VAR_1),
     VAR_5, VAR_4, VAR_3,
     ((0 - VAR_3) * (VAR_4 + 1)) / 4,
     ((VAR_5 - VAR_3) * (VAR_4 + 1)) / 4);
}
