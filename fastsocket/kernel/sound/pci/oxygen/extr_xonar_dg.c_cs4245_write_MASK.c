
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct oxygen {struct dg* model_data; } ;
struct dg {unsigned int* cs4245_regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct oxygen*,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_7, unsigned int VAR_8, u8 VAR_9)
{
 struct dg *VAR_10 = VAR_7->model_data;

 FUNC_0(VAR_7, VAR_6 |
    VAR_5 |
    VAR_3 |
    (0 << VAR_4) |
    VAR_2,
    VAR_0 |
    VAR_1 |
    (VAR_8 << 8) | VAR_9);
 VAR_10->cs4245_regs[VAR_8] = VAR_9;
}
