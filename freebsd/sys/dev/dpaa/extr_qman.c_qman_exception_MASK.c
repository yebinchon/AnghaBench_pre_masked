
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct qman_softc* t_Handle ;
struct qman_softc {int sc_dev; } ;
typedef int e_QmExceptions ;


 int FUNC_0 (int ,char*,char const*) ;
__attribute__((used)) static void
FUNC_1(t_Handle VAR_0, e_QmExceptions VAR_1)
{
 struct qman_softc *VAR_2;
 const char *VAR_3;

 VAR_2 = VAR_0;

 switch (VAR_1) {
 case 143:
  VAR_3 = "Initiator Data Error";
  break;
 case 141:
  VAR_3 = "CoreNet Target Data Error";
  break;
 case 142:
  VAR_3 = "Invalid Target Transaction";
  break;
 case 129:
  VAR_3 = "PFDR Low Watermark Interrupt";
  break;
 case 130:
  VAR_3 = "PFDR Enqueues Blocked Interrupt";
  break;
 case 128:
  VAR_3 = "Single Bit ECC Error Interrupt";
  break;
 case 131:
  VAR_3 = "Multi Bit ECC Error Interrupt";
  break;
 case 132:
  VAR_3 = "Invalid Command Verb Interrupt";
  break;
 case 140:
  VAR_3 = "Invalid Dequeue Direct Connect Portal Interrupt";
  break;
 case 139:
  VAR_3 = "Invalid Dequeue FQ Interrupt";
  break;
 case 137:
  VAR_3 = "Invalid Dequeue Source Interrupt";
  break;
 case 138:
  VAR_3 = "Invalid Dequeue Queue Interrupt";
  break;
 case 135:
  VAR_3 = "Invalid Enqueue Overflow Interrupt";
  break;
 case 133:
  VAR_3 = "Invalid Enqueue State Interrupt";
  break;
 case 136:
  VAR_3 = "Invalid Enqueue Channel Interrupt";
  break;
 case 134:
  VAR_3 = "Invalid Enqueue Queue Interrupt";
  break;
 case 144:
  VAR_3 = "CG change state notification";
  break;
 default:
  VAR_3 = "Unknown error";
 }

 FUNC_0(VAR_2->sc_dev, "QMan Exception: %s.\n", VAR_3);
}
